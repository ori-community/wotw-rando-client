#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AtlasSpriteTexture.h>
#include <Modloader/app/structs/List_1_AtlasSpriteTexture_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_AtlasSpriteTexture_.h>

namespace app::classes::System::Collections::Generic::List_1_AtlasSpriteTexture_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AtlasSpriteTexture*, get_Item, (app::List_1_AtlasSpriteTexture_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04794AA8, List_1_AtlasSpriteTexture__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_AtlasSpriteTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799C90, List_1_AtlasSpriteTexture__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_AtlasSpriteTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779AC8, List_1_AtlasSpriteTexture__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_AtlasSpriteTexture_ * this_ptr, app::AtlasSpriteTexture* item))
    IL2CPP_REGISTER_METHODINFO(0x04771730, List_1_AtlasSpriteTexture__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_AtlasSpriteTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F958, List_1_AtlasSpriteTexture___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_AtlasSpriteTexture_, GetEnumerator, (app::List_1_AtlasSpriteTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475DE38, List_1_AtlasSpriteTexture__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_AtlasSpriteTexture_
