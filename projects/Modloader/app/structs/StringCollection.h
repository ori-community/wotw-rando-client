#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringCollection_DEFINED)
#include <Modloader/app/structs/StringCollection__Fields.h>
#if defined(IL2CPP_STRUCT_StringCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_StringCollection_DEFINED
struct StringCollection__Class;
struct StringCollection {
    struct StringCollection__Class* klass;
    MonitorData* monitor;
    struct StringCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringCollection_FWDDECL)
#define IL2CPP_STRUCT_StringCollection_FWDDECL
#include <Modloader/app/structs/StringCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_StringCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringCollection_DEFINED) && !defined(IL2CPP_STRUCT_StringCollection_FWDDECL)
#include <Modloader/app/structs/StringCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
