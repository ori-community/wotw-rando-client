#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSource__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationSource__Fields_DEFINED
struct Type__Array;
struct String;
struct __declspec(align(8)) SerializationSource__Fields {
    struct Type__Array* includedTypes;
    struct String* namspace;
    bool canBeGenerated;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationSource__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_SerializationSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSource__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
