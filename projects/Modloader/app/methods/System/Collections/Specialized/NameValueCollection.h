#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/DBNull.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Collections::Specialized::NameValueCollection {
    IL2CPP_REGISTER_METHOD(0x024997A0, void, ctor_1, (app::NameValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024998E0, void, ctor_2, (app::NameValueCollection * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02499A10, void, ctor_3, (app::NameValueCollection * this_ptr, int32_t capacity, app::IEqualityComparer* equality_comparer))
    IL2CPP_REGISTER_METHOD(0x02499AD0, void, ctor_4, (app::NameValueCollection * this_ptr, app::DBNull* dummy))
    IL2CPP_REGISTER_METHOD(0x02499B60, void, ctor_5, (app::NameValueCollection * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02499C10, void, InvalidateCachedArrays, (app::NameValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02499C20, app::String*, GetAsOneString, (app::ArrayList * list))
    IL2CPP_REGISTER_METHOD(0x0249A000, app::String__Array*, GetAsStringArray, (app::ArrayList * list))
    IL2CPP_REGISTER_METHOD(0x0249A0F0, void, Add_1, (app::NameValueCollection * this_ptr, app::NameValueCollection* c))
    IL2CPP_REGISTER_METHODINFO(0x0472F010, NameValueCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0249A290, void, Clear, (app::NameValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047597E0, NameValueCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0249A400, bool, HasKeys, (app::NameValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02497B80, bool, InternalHasKeys, (app::NameValueCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0249A420, void, Add_2, (app::NameValueCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0474B2F0, NameValueCollection_Add_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0249A6E0, app::String*, Get_1, (app::NameValueCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0249A7E0, app::String__Array*, GetValues_1, (app::NameValueCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0249A8E0, void, Set, (app::NameValueCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0472FF00, NameValueCollection_Set__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0249ABD0, void, Remove, (app::NameValueCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0249ABF0, app::String*, get_Item_1, (app::NameValueCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0249AC10, void, set_Item, (app::NameValueCollection * this_ptr, app::String* name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0249AC30, app::String*, Get_2, (app::NameValueCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0249AD20, app::String__Array*, GetValues_2, (app::NameValueCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0249AE10, app::String*, GetKey, (app::NameValueCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x018687B0, app::String*, get_Item_2, (app::NameValueCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0249AE20, app::String__Array*, get_AllKeys, (app::NameValueCollection * this_ptr))
} // namespace app::classes::System::Collections::Specialized::NameValueCollection
