#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEntanglingRootsSpell.h>

namespace app::classes::SeinEntanglingRootsSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinEntanglingRootsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AD0B60, void, OnSetReferenceToSein, app::SeinEntanglingRootsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AD0B90, void, OnDestroy, app::SeinEntanglingRootsSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinEntanglingRootsSpell* this_ptr)
} // namespace app::classes::SeinEntanglingRootsSpell
