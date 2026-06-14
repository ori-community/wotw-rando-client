#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidBlob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidBlob_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidBlob_DEFINED)
#include <Modloader/app/structs/AcidBlob__Fields.h>
#if defined(IL2CPP_STRUCT_AcidBlob__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidBlob_DEFINED
struct AcidBlob__Class;
struct AcidBlob {
    struct AcidBlob__Class* klass;
    MonitorData* monitor;
    struct AcidBlob__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcidBlob_FWDDECL)
#define IL2CPP_STRUCT_AcidBlob_FWDDECL
#include <Modloader/app/structs/AcidBlob__Class.h>
#endif
#undef IL2CPP_STRUCT_AcidBlob_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidBlob_DEFINED) && !defined(IL2CPP_STRUCT_AcidBlob_FWDDECL)
#include <Modloader/app/structs/AcidBlob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidBlob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
