#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StrongNameKeyPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StrongNameKeyPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_StrongNameKeyPair_DEFINED)
#include <Modloader/app/structs/StrongNameKeyPair__Fields.h>
#if defined(IL2CPP_STRUCT_StrongNameKeyPair__Fields_DEFINED)
#define IL2CPP_STRUCT_StrongNameKeyPair_DEFINED
struct StrongNameKeyPair__Class;
struct StrongNameKeyPair {
    struct StrongNameKeyPair__Class* klass;
    MonitorData* monitor;
    struct StrongNameKeyPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StrongNameKeyPair_FWDDECL)
#define IL2CPP_STRUCT_StrongNameKeyPair_FWDDECL
#include <Modloader/app/structs/StrongNameKeyPair__Class.h>
#endif
#undef IL2CPP_STRUCT_StrongNameKeyPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_StrongNameKeyPair_DEFINED) && !defined(IL2CPP_STRUCT_StrongNameKeyPair_FWDDECL)
#include <Modloader/app/structs/StrongNameKeyPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StrongNameKeyPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
