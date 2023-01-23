#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiskBlurSRP_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiskBlurSRP_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiskBlurSRP_DEFINED)
#include <Modloader/app/structs/DiskBlurSRP__Fields.h>
#if defined(IL2CPP_STRUCT_DiskBlurSRP__Fields_DEFINED)
#define IL2CPP_STRUCT_DiskBlurSRP_DEFINED
struct DiskBlurSRP__Class;
struct DiskBlurSRP {
    struct DiskBlurSRP__Class* klass;
    MonitorData* monitor;
    struct DiskBlurSRP__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DiskBlurSRP_FWDDECL)
#define IL2CPP_STRUCT_DiskBlurSRP_FWDDECL
#include <Modloader/app/structs/DiskBlurSRP__Class.h>
#endif
#undef IL2CPP_STRUCT_DiskBlurSRP_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiskBlurSRP_DEFINED) && !defined(IL2CPP_STRUCT_DiskBlurSRP_FWDDECL)
#include <Modloader/app/structs/DiskBlurSRP.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiskBlurSRP.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
