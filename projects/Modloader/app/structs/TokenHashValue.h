#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenHashValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenHashValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenHashValue_DEFINED)
#include <Modloader/app/structs/TokenHashValue__Fields.h>
#if defined(IL2CPP_STRUCT_TokenHashValue__Fields_DEFINED)
#define IL2CPP_STRUCT_TokenHashValue_DEFINED
struct TokenHashValue__Class;
struct TokenHashValue {
    struct TokenHashValue__Class* klass;
    MonitorData* monitor;
    struct TokenHashValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TokenHashValue_FWDDECL)
#define IL2CPP_STRUCT_TokenHashValue_FWDDECL
#include <Modloader/app/structs/TokenHashValue__Class.h>
#endif
#undef IL2CPP_STRUCT_TokenHashValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenHashValue_DEFINED) && !defined(IL2CPP_STRUCT_TokenHashValue_FWDDECL)
#include <Modloader/app/structs/TokenHashValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenHashValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
