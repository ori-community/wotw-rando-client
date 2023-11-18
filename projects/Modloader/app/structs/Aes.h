#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Aes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Aes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Aes_DEFINED)
#include <Modloader/app/structs/Aes__Fields.h>
#if defined(IL2CPP_STRUCT_Aes__Fields_DEFINED)
#define IL2CPP_STRUCT_Aes_DEFINED
struct Aes__Class;
struct Aes {
    struct Aes__Class* klass;
    MonitorData* monitor;
    struct Aes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Aes_FWDDECL)
#define IL2CPP_STRUCT_Aes_FWDDECL
#include <Modloader/app/structs/Aes__Class.h>
#endif
#undef IL2CPP_STRUCT_Aes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Aes_DEFINED) && !defined(IL2CPP_STRUCT_Aes_FWDDECL)
#include <Modloader/app/structs/Aes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Aes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
