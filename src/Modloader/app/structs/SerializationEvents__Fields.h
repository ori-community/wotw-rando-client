#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationEvents__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationEvents__Fields_DEFINED
struct List_1_System_Reflection_MethodInfo_;
struct __declspec(align(8)) SerializationEvents__Fields {
    struct List_1_System_Reflection_MethodInfo_* m_OnSerializingMethods;
    struct List_1_System_Reflection_MethodInfo_* m_OnSerializedMethods;
    struct List_1_System_Reflection_MethodInfo_* m_OnDeserializingMethods;
    struct List_1_System_Reflection_MethodInfo_* m_OnDeserializedMethods;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationEvents__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationEvents__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Reflection_MethodInfo_.h>
#endif
#undef IL2CPP_STRUCT_SerializationEvents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationEvents__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationEvents__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationEvents__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationEvents__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
