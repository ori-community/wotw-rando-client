#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkIterator {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkIterator * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026ED4C0, void*, getCPtr, (app::AkIterator * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkIterator * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026ED550, void, Finalize, (app::AkIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026ED5D0, void, Dispose, (app::AkIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026ED7E0, void, set_pItem, (app::AkIterator * this_ptr, app::AkPlaylistItem* value))
    IL2CPP_REGISTER_METHOD(0x026ED920, app::AkPlaylistItem*, get_pItem, (app::AkIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EDB30, app::AkIterator*, NextIter, (app::AkIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EDD30, app::AkIterator*, PrevIter, (app::AkIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EDF30, app::AkPlaylistItem*, GetItem, (app::AkIterator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EE130, bool, IsEqualTo, (app::AkIterator * this_ptr, app::AkIterator* in_r_op))
    IL2CPP_REGISTER_METHOD(0x026EE2D0, bool, IsDifferentFrom, (app::AkIterator * this_ptr, app::AkIterator* in_r_op))
    IL2CPP_REGISTER_METHOD(0x026EE470, void, ctor_2, (app::AkIterator * this_ptr))
} // namespace app::classes::AkIterator
