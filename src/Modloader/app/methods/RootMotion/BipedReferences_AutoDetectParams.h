#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BipedReferences_AutoDetectParams.h>
#include <Modloader/app/structs/BipedReferences_AutoDetectParams__Boxed.h>

namespace app::classes::RootMotion::BipedReferences_AutoDetectParams {
    IL2CPP_REGISTER_METHOD(0x0014FF40, void, ctor, app::BipedReferences_AutoDetectParams__Boxed* this_ptr, bool legs_parent_in_spine, bool include_eyes)
    IL2CPP_REGISTER_METHOD(0x022065E0, app::BipedReferences_AutoDetectParams, get_Default, )
} // namespace app::classes::RootMotion::BipedReferences_AutoDetectParams
