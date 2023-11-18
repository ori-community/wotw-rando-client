#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/CharArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CharArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CharArrayTypeInfo_DEFINED
struct CharArrayTypeInfo__Class;
struct CharArrayTypeInfo {
    struct CharArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct CharArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_CharArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/CharArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CharArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_CharArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/CharArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
