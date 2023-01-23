#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkPlaylistArray.h>
#include <Modloader/app/structs/AkIterator.h>
#include <Modloader/app/structs/AkPlaylistItem.h>
#include <Modloader/app/structs/AKRESULT__Enum.h>

namespace app::classes::AkPlaylistArray {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkPlaylistArray * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x0188B410, void*, getCPtr, (app::AkPlaylistArray * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkPlaylistArray * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x0188B4A0, void, Finalize, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188B520, void, Dispose, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188B730, void, ctor_2, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188B850, app::AkIterator*, Begin, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188BA50, app::AkIterator*, End, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188BC50, app::AkIterator*, FindEx, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem* in__item))
    IL2CPP_REGISTER_METHOD(0x0188BE60, app::AkIterator*, Erase_1, (app::AkPlaylistArray * this_ptr, app::AkIterator* in_r_iter))
    IL2CPP_REGISTER_METHOD(0x0188C070, void, Erase_2, (app::AkPlaylistArray * this_ptr, uint32_t in_u_index))
    IL2CPP_REGISTER_METHOD(0x0188C1A0, app::AkIterator*, EraseSwap, (app::AkPlaylistArray * this_ptr, app::AkIterator* in_r_iter))
    IL2CPP_REGISTER_METHOD(0x0188C3B0, app::AKRESULT__Enum, Reserve, (app::AkPlaylistArray * this_ptr, uint32_t in_ul_reserve))
    IL2CPP_REGISTER_METHOD(0x0188C4E0, uint32_t, Reserved, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188C600, void, Term, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188C720, uint32_t, Length, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188C840, app::AkPlaylistItem*, Data, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188CA50, bool, IsEmpty, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188CB80, app::AkPlaylistItem*, Exists, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem* in__item))
    IL2CPP_REGISTER_METHOD(0x0188CDB0, app::AkPlaylistItem*, AddLast_1, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188CFC0, app::AkPlaylistItem*, AddLast_2, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem* in_r_item))
    IL2CPP_REGISTER_METHOD(0x0188D1F0, app::AkPlaylistItem*, Last, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188D3F0, void, RemoveLast, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188D510, app::AKRESULT__Enum, Remove, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem* in_r_item))
    IL2CPP_REGISTER_METHOD(0x0188D650, app::AKRESULT__Enum, RemoveSwap, (app::AkPlaylistArray * this_ptr, app::AkPlaylistItem* in_r_item))
    IL2CPP_REGISTER_METHOD(0x0188D790, void, RemoveAll, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188D8B0, app::AkPlaylistItem*, ItemAtIndex, (app::AkPlaylistArray * this_ptr, uint32_t ui_index))
    IL2CPP_REGISTER_METHOD(0x0188DAB0, app::AkPlaylistItem*, Insert, (app::AkPlaylistArray * this_ptr, uint32_t in_u_index))
    IL2CPP_REGISTER_METHOD(0x0188DCD0, bool, GrowArray_1, (app::AkPlaylistArray * this_ptr, uint32_t in_u_grow_by))
    IL2CPP_REGISTER_METHOD(0x0188DE00, bool, GrowArray_2, (app::AkPlaylistArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188DF30, bool, Resize, (app::AkPlaylistArray * this_ptr, uint32_t in_ui_size))
    IL2CPP_REGISTER_METHOD(0x0188E060, void, Transfer, (app::AkPlaylistArray * this_ptr, app::AkPlaylistArray* in_r_source))
    IL2CPP_REGISTER_METHOD(0x0188E1F0, app::AKRESULT__Enum, Copy, (app::AkPlaylistArray * this_ptr, app::AkPlaylistArray* in_r_source))
} // namespace app::classes::AkPlaylistArray
