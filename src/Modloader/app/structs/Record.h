#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Record_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Record_INITIALIZING
#if !defined(IL2CPP_STRUCT_Record_DEFINED)
#include <Modloader/app/structs/Record__Fields.h>
#if defined(IL2CPP_STRUCT_Record__Fields_DEFINED)
#define IL2CPP_STRUCT_Record_DEFINED
struct Record__Class;
struct Record {
    struct Record__Class* klass;
    MonitorData* monitor;
    struct Record__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Record_FWDDECL)
#define IL2CPP_STRUCT_Record_FWDDECL
#include <Modloader/app/structs/Record__Class.h>
#endif
#undef IL2CPP_STRUCT_Record_INITIALIZING
#if !defined(IL2CPP_STRUCT_Record_DEFINED) && !defined(IL2CPP_STRUCT_Record_FWDDECL)
#include <Modloader/app/structs/Record.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Record.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
