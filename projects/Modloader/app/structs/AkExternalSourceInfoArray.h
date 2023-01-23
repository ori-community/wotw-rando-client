#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkExternalSourceInfoArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkExternalSourceInfoArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkExternalSourceInfoArray_DEFINED)
#include <Modloader/app/structs/AkExternalSourceInfoArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkExternalSourceInfoArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkExternalSourceInfoArray_DEFINED
struct AkExternalSourceInfoArray__Class;
struct AkExternalSourceInfoArray {
    struct AkExternalSourceInfoArray__Class* klass;
    MonitorData* monitor;
    struct AkExternalSourceInfoArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkExternalSourceInfoArray_FWDDECL)
#define IL2CPP_STRUCT_AkExternalSourceInfoArray_FWDDECL
#include <Modloader/app/structs/AkExternalSourceInfoArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkExternalSourceInfoArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkExternalSourceInfoArray_DEFINED) && !defined(IL2CPP_STRUCT_AkExternalSourceInfoArray_FWDDECL)
#include <Modloader/app/structs/AkExternalSourceInfoArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkExternalSourceInfoArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
