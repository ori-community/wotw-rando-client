#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_DEFINED
struct String;
struct __declspec(align(8)) Tuple_2_Guid_String___Fields {
    struct Guid m_Item1;
    struct String* m_Item2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_FWDDECL)
#define IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tuple_2_Guid_String___Fields_FWDDECL)
#include <Modloader/app/structs/Tuple_2_Guid_String___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tuple_2_Guid_String___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
