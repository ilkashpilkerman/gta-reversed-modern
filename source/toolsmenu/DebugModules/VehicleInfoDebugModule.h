#pragma once
#include "DebugModule.h"

class VehicleInfoDebugModule final : public DebugModule {
public:
    void RenderWindow() override final;
    void RenderMenuEntry() override final;

    NOTSA_IMPLEMENT_DEBUG_MODULE_SERIALIZATION(VehicleInfoDebugModule, m_IsOpen);

private:
    bool m_IsOpen{};
};
