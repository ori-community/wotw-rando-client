#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderBuildUpdate.h>

namespace app::classes::UberShaderBuildUpdate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::UberShaderBuildUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::UberShaderBuildUpdate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190C7D0, void, ctor, (app::UberShaderBuildUpdate * this_ptr))
} // namespace app::classes::UberShaderBuildUpdate
