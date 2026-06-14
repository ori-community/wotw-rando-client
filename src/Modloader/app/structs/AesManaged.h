#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AesManaged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AesManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesManaged_DEFINED)
#include <Modloader/app/structs/AesManaged__Fields.h>
#if defined(IL2CPP_STRUCT_AesManaged__Fields_DEFINED)
#define IL2CPP_STRUCT_AesManaged_DEFINED
struct AesManaged__Class;
struct AesManaged {
    struct AesManaged__Class* klass;
    MonitorData* monitor;
    struct AesManaged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AesManaged_FWDDECL)
#define IL2CPP_STRUCT_AesManaged_FWDDECL
#include <Modloader/app/structs/AesManaged__Class.h>
#endif
#undef IL2CPP_STRUCT_AesManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_AesManaged_DEFINED) && !defined(IL2CPP_STRUCT_AesManaged_FWDDECL)
#include <Modloader/app/structs/AesManaged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AesManaged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
