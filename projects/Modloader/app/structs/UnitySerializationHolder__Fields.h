#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnitySerializationHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnitySerializationHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySerializationHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_UnitySerializationHolder__Fields_DEFINED
struct Type__Array;
struct Int32__Array;
struct Type;
struct MethodBase;
struct String;
struct __declspec(align(8)) UnitySerializationHolder__Fields {
    struct Type__Array* m_instantiation;
    struct Int32__Array* m_elementTypes;
    int32_t m_genericParameterPosition;
    struct Type* m_declaringType;
    struct MethodBase* m_declaringMethod;
    struct String* m_data;
    struct String* m_assemblyName;
    int32_t m_unityType;
};
#endif
#if !defined(IL2CPP_STRUCT_UnitySerializationHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnitySerializationHolder__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_UnitySerializationHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySerializationHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnitySerializationHolder__Fields_FWDDECL)
#include <Modloader/app/structs/UnitySerializationHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnitySerializationHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
