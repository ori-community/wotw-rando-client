#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCTextMarkedColorer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCTextMarkedColorer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextMarkedColorer_DEFINED)
#include <Modloader/app/structs/CCTextMarkedColorer__Fields.h>
#if defined(IL2CPP_STRUCT_CCTextMarkedColorer__Fields_DEFINED)
#define IL2CPP_STRUCT_CCTextMarkedColorer_DEFINED
struct CCTextMarkedColorer__Class;
struct CCTextMarkedColorer {
    struct CCTextMarkedColorer__Class* klass;
    MonitorData* monitor;
    struct CCTextMarkedColorer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCTextMarkedColorer_FWDDECL)
#define IL2CPP_STRUCT_CCTextMarkedColorer_FWDDECL
#include <Modloader/app/structs/CCTextMarkedColorer__Class.h>
#endif
#undef IL2CPP_STRUCT_CCTextMarkedColorer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextMarkedColorer_DEFINED) && !defined(IL2CPP_STRUCT_CCTextMarkedColorer_FWDDECL)
#include <Modloader/app/structs/CCTextMarkedColorer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCTextMarkedColorer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
