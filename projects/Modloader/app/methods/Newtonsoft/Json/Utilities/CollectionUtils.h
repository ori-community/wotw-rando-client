#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/IList_1_System_Int32_.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Func_2_Object_Boolean_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ICollection_1_Newtonsoft_Json_JsonConverter_.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/List_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_SerializationCallback_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Serialization_SerializationCallback_.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_.h>
#include <Modloader/app/structs/IList_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/DynamicMetaObject__Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/Func_2_System_Reflection_PropertyInfo_Boolean_.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/IList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Newtonsoft::Json::Utilities::CollectionUtils {
    IL2CPP_REGISTER_METHOD(0x01C00BD0, bool, IsDictionaryType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01C00D90, app::ConstructorInfo*, ResolveEnumerableCollectionConstructor_1, (app::Type * collection_type, app::Type* collection_item_type))
    IL2CPP_REGISTER_METHOD(0x01C00EF0, app::ConstructorInfo*, ResolveEnumerableCollectionConstructor_2, (app::Type * collection_type, app::Type* collection_item_type, app::Type* constructor_argument_type))
    IL2CPP_REGISTER_METHOD(0x01C011C0, app::IList_1_System_Int32_*, GetDimensions, (app::IList * values, int32_t dimensions_count))
    IL2CPP_REGISTER_METHOD(0x01C01690, void, CopyFromJaggedToMultidimensionalArray, (app::IList * values, app::Array* multidimensional_array, app::Int32__Array* indices))
    IL2CPP_REGISTER_METHODINFO(0x04705D80, CollectionUtils_CopyFromJaggedToMultidimensionalArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C01980, app::Object*, JaggedArrayGetValue, (app::IList * values, app::Int32__Array* indices))
    IL2CPP_REGISTER_METHOD(0x01C01AB0, app::Array*, ToMultidimensionalArray, (app::IList * values, app::Type* type, int32_t rank))
    IL2CPP_REGISTER_METHOD(0x01B350A0, bool, IsNullOrEmpty_1, (app::ICollection_1_System_Object_ * collection))
    IL2CPP_REGISTER_METHOD(0x01552F40, void, AddRange_1, (app::IList_1_System_Object_ * initial, app::IEnumerable_1_System_Object_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04771C10, CollectionUtils_AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654D30, int32_t, IndexOf_1, (app::IEnumerable_1_System_Object_ * collection, app::Func_2_Object_Boolean_* predicate))
    IL2CPP_REGISTER_METHOD(0x01B34F90, bool, Contains, (app::List_1_System_Object_ * list, app::Object* value, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476AA58, CollectionUtils_Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654F40, int32_t, IndexOfReference_1, (app::List_1_System_Object_ * list, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x01553340, void, FastReverse_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x01586730, app::Object__Array*, ArrayEmpty_1, ())
    IL2CPP_REGISTER_METHODINFO(0x04769688, CollectionUtils_ArrayEmpty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586730, app::Byte__Array*, ArrayEmpty_2, ())
    IL2CPP_REGISTER_METHODINFO(0x04785CD0, CollectionUtils_ArrayEmpty_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B350A0, bool, IsNullOrEmpty_2, (app::ICollection_1_Newtonsoft_Json_JsonConverter_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x04771FE0, CollectionUtils_IsNullOrEmpty_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654F40, int32_t, IndexOfReference_2, (app::List_1_Newtonsoft_Json_Linq_JToken_ * list, app::JToken* item))
    IL2CPP_REGISTER_METHODINFO(0x04788378, CollectionUtils_IndexOfReference_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01553210, void, FastReverse_2, (app::List_1_Newtonsoft_Json_JsonPosition_ * list))
    IL2CPP_REGISTER_METHODINFO(0x047818F8, CollectionUtils_FastReverse_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552F40, void, AddRange_2, (app::IList_1_Newtonsoft_Json_Serialization_JsonProperty_ * initial, app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0477A9C0, CollectionUtils_AddRange_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552F40, void, AddRange_3, (app::IList_1_Newtonsoft_Json_Serialization_SerializationCallback_ * initial, app::IEnumerable_1_Newtonsoft_Json_Serialization_SerializationCallback_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04712B58, CollectionUtils_AddRange_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552F40, void, AddRange_4, (app::IList_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_ * initial, app::IEnumerable_1_Newtonsoft_Json_Serialization_SerializationErrorCallback_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04712640, CollectionUtils_AddRange_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552F40, void, AddRange_5, (app::IList_1_System_Reflection_MemberInfo_ * initial, app::IEnumerable_1_System_Reflection_MemberInfo_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04708BD0, CollectionUtils_AddRange_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586730, app::Int32__Array*, ArrayEmpty_3, ())
    IL2CPP_REGISTER_METHODINFO(0x0475C328, CollectionUtils_ArrayEmpty_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586730, app::DynamicMetaObject__Array*, ArrayEmpty_4, ())
    IL2CPP_REGISTER_METHODINFO(0x04756FA0, CollectionUtils_ArrayEmpty_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02654D30, int32_t, IndexOf_2, (app::IEnumerable_1_System_Reflection_PropertyInfo_ * collection, app::Func_2_System_Reflection_PropertyInfo_Boolean_* predicate))
    IL2CPP_REGISTER_METHODINFO(0x04785AB8, CollectionUtils_IndexOf_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586730, app::Expression__Array*, ArrayEmpty_5, ())
    IL2CPP_REGISTER_METHODINFO(0x047962C8, CollectionUtils_ArrayEmpty_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01552F40, void, AddRange_6, (app::IList_1_System_Linq_Expressions_Expression_ * initial, app::IEnumerable_1_System_Linq_Expressions_Expression_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04707C30, CollectionUtils_AddRange_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01586730, app::String__Array*, ArrayEmpty_6, ())
    IL2CPP_REGISTER_METHODINFO(0x047868E8, CollectionUtils_ArrayEmpty_5__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Utilities::CollectionUtils
