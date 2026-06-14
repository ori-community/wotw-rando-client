#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirtyUtility.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::DirtyUtility {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, MarkObjectAsDirty, app::Object_1* target)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DirtyUtility* this_ptr)
} // namespace app::classes::DirtyUtility
