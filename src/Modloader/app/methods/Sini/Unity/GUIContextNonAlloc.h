#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIContextNonAlloc.h>
#include <Modloader/app/structs/GUIContextNonAlloc__Boxed.h>

namespace app::classes::Sini::Unity::GUIContextNonAlloc {
    IL2CPP_REGISTER_METHOD(0x00246DA0, void, ctor, app::GUIContextNonAlloc__Boxed* this_ptr, bool _)
    IL2CPP_REGISTER_METHOD(0x031151D0, app::GUIContextNonAlloc, Push, )
    IL2CPP_REGISTER_METHOD(0x00246DB0, void, Dispose, app::GUIContextNonAlloc__Boxed* this_ptr)
} // namespace app::classes::Sini::Unity::GUIContextNonAlloc
