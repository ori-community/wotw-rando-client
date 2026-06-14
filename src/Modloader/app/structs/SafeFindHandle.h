#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeFindHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeFindHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeFindHandle_DEFINED)
#include <Modloader/app/structs/SafeFindHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeFindHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeFindHandle_DEFINED
struct SafeFindHandle__Class;
struct SafeFindHandle {
    struct SafeFindHandle__Class* klass;
    MonitorData* monitor;
    struct SafeFindHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeFindHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeFindHandle_FWDDECL
#include <Modloader/app/structs/SafeFindHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeFindHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeFindHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeFindHandle_FWDDECL)
#include <Modloader/app/structs/SafeFindHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeFindHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
