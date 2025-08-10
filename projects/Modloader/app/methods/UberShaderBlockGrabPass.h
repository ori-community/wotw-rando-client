#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderBlockGrabPass.h>

namespace app::classes::UberShaderBlockGrabPass {
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, Awake, app::UberShaderBlockGrabPass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007882F0, void, OnPoolSpawned, app::UberShaderBlockGrabPass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190BDC0, void, Update, app::UberShaderBlockGrabPass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190C160, void, SetProperties, app::UberShaderBlockGrabPass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoStrip, app::UberShaderBlockGrabPass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190C200, void, ctor, app::UberShaderBlockGrabPass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::UberShaderBlockGrabPass
