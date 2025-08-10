#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderBlockTextured.h>

namespace app::classes::UberShaderBlockTextured {
    IL2CPP_REGISTER_METHOD(0x0190C360, void, SetProperties, app::UberShaderBlockTextured* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::UberShaderBlockTextured* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeStrip, app::UberShaderBlockTextured* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190C460, void, ctor, app::UberShaderBlockTextured* this_ptr)
} // namespace app::classes::UberShaderBlockTextured
