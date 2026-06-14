#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderRuntimeZShift.h>

namespace app::classes::UberShaderRuntimeZShift {
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsInScene, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsInScene, app::UberShaderRuntimeZShift* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01287A80, app::Renderer*, GetRenderer, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01287B90, void, OnDestroy, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01287B90, void, OnDisable, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01287BA0, void, RestoreMaterial, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01287CB0, void, Init, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01287E70, void, Awake, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01287E80, void, Update, app::UberShaderRuntimeZShift* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::UberShaderRuntimeZShift* this_ptr)
} // namespace app::classes::UberShaderRuntimeZShift
