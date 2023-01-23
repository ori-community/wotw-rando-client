#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParseRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParseRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParseRecord_DEFINED)
#include <Modloader/app/structs/ParseRecord__Fields.h>
#if defined(IL2CPP_STRUCT_ParseRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_ParseRecord_DEFINED
struct ParseRecord__Class;
struct ParseRecord {
    struct ParseRecord__Class* klass;
    MonitorData* monitor;
    struct ParseRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParseRecord_FWDDECL)
#define IL2CPP_STRUCT_ParseRecord_FWDDECL
#include <Modloader/app/structs/ParseRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_ParseRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParseRecord_DEFINED) && !defined(IL2CPP_STRUCT_ParseRecord_FWDDECL)
#include <Modloader/app/structs/ParseRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParseRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
