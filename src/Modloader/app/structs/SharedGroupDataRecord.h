#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedGroupDataRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedGroupDataRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedGroupDataRecord_DEFINED)
#include <Modloader/app/structs/SharedGroupDataRecord__Fields.h>
#if defined(IL2CPP_STRUCT_SharedGroupDataRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_SharedGroupDataRecord_DEFINED
struct SharedGroupDataRecord__Class;
struct SharedGroupDataRecord {
    struct SharedGroupDataRecord__Class* klass;
    MonitorData* monitor;
    struct SharedGroupDataRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SharedGroupDataRecord_FWDDECL)
#define IL2CPP_STRUCT_SharedGroupDataRecord_FWDDECL
#include <Modloader/app/structs/SharedGroupDataRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedGroupDataRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedGroupDataRecord_DEFINED) && !defined(IL2CPP_STRUCT_SharedGroupDataRecord_FWDDECL)
#include <Modloader/app/structs/SharedGroupDataRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedGroupDataRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
