#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_P3D_TexturePreview_.h>
#include <Modloader/app/structs/P3D_TexturePreview.h>

namespace app::classes::System::Collections::Generic::List_1_P3D_TexturePreview_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_P3D_TexturePreview_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734578, List_1_P3D_TexturePreview__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::P3D_TexturePreview*, get_Item, (app::List_1_P3D_TexturePreview_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04706DF8, List_1_P3D_TexturePreview__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_P3D_TexturePreview_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04781980, List_1_P3D_TexturePreview__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_P3D_TexturePreview_ * this_ptr, app::P3D_TexturePreview* item))
    IL2CPP_REGISTER_METHODINFO(0x047792F8, List_1_P3D_TexturePreview__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_P3D_TexturePreview_ * this_ptr, app::P3D_TexturePreview* item))
    IL2CPP_REGISTER_METHODINFO(0x04746418, List_1_P3D_TexturePreview__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_P3D_TexturePreview_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760150, List_1_P3D_TexturePreview___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_P3D_TexturePreview_
