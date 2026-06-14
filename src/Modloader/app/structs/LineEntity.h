#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineEntity_DEFINED)
#include <Modloader/app/structs/LineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LineEntity_DEFINED
struct LineEntity__Class;
struct LineEntity {
    struct LineEntity__Class* klass;
    MonitorData* monitor;
    struct LineEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineEntity_FWDDECL)
#define IL2CPP_STRUCT_LineEntity_FWDDECL
#include <Modloader/app/structs/LineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineEntity_DEFINED) && !defined(IL2CPP_STRUCT_LineEntity_FWDDECL)
#include <Modloader/app/structs/LineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
