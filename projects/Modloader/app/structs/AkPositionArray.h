#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPositionArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPositionArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPositionArray_DEFINED)
#include <Modloader/app/structs/AkPositionArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkPositionArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPositionArray_DEFINED
struct AkPositionArray__Class;
struct AkPositionArray {
    struct AkPositionArray__Class* klass;
    MonitorData* monitor;
    struct AkPositionArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPositionArray_FWDDECL)
#define IL2CPP_STRUCT_AkPositionArray_FWDDECL
#include <Modloader/app/structs/AkPositionArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPositionArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPositionArray_DEFINED) && !defined(IL2CPP_STRUCT_AkPositionArray_FWDDECL)
#include <Modloader/app/structs/AkPositionArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPositionArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
