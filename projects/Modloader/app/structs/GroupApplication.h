#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupApplication_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupApplication_DEFINED)
#include <Modloader/app/structs/GroupApplication__Fields.h>
#if defined(IL2CPP_STRUCT_GroupApplication__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupApplication_DEFINED
struct GroupApplication__Class;
struct GroupApplication {
    struct GroupApplication__Class* klass;
    MonitorData* monitor;
    struct GroupApplication__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupApplication_FWDDECL)
#define IL2CPP_STRUCT_GroupApplication_FWDDECL
#include <Modloader/app/structs/GroupApplication__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupApplication_DEFINED) && !defined(IL2CPP_STRUCT_GroupApplication_FWDDECL)
#include <Modloader/app/structs/GroupApplication.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupApplication.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
