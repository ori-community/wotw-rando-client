#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationFieldInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationFieldInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationFieldInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationFieldInfo__Fields_DEFINED
struct RuntimeFieldInfo;
struct String;
struct __declspec(align(8)) SerializationFieldInfo__Fields {
    struct RuntimeFieldInfo* m_field;
    struct String* m_serializationName;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationFieldInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationFieldInfo__Fields_FWDDECL
#include <Modloader/app/structs/RuntimeFieldInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SerializationFieldInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationFieldInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationFieldInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationFieldInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationFieldInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
