#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_Byte_;
struct __declspec(align(8)) NintendoFileStorageEventHandler__Fields {
    struct String* m_sourceKey;
    struct Dictionary_2_System_String_System_Byte_* m_data;
};
#endif
#if !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Byte_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NintendoFileStorageEventHandler__Fields_FWDDECL)
#include <Modloader/app/structs/NintendoFileStorageEventHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoFileStorageEventHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
