#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkObjectInfoArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkObjectInfoArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkObjectInfoArray_DEFINED)
#include <Modloader/app/structs/AkObjectInfoArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkObjectInfoArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkObjectInfoArray_DEFINED
struct AkObjectInfoArray__Class;
struct AkObjectInfoArray {
    struct AkObjectInfoArray__Class* klass;
    MonitorData* monitor;
    struct AkObjectInfoArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkObjectInfoArray_FWDDECL)
#define IL2CPP_STRUCT_AkObjectInfoArray_FWDDECL
#include <Modloader/app/structs/AkObjectInfoArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkObjectInfoArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkObjectInfoArray_DEFINED) && !defined(IL2CPP_STRUCT_AkObjectInfoArray_FWDDECL)
#include <Modloader/app/structs/AkObjectInfoArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkObjectInfoArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
