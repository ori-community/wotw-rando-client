#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRecordable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRecordable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecordable_DEFINED)
#define IL2CPP_STRUCT_IRecordable_DEFINED
struct IRecordable__Class;
struct IRecordable {
    struct IRecordable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRecordable_FWDDECL)
#define IL2CPP_STRUCT_IRecordable_FWDDECL
#include <Modloader/app/structs/IRecordable__Class.h>
#endif
#undef IL2CPP_STRUCT_IRecordable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecordable_DEFINED) && !defined(IL2CPP_STRUCT_IRecordable_FWDDECL)
#include <Modloader/app/structs/IRecordable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRecordable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
