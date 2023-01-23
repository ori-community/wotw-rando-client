#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringStorage_DEFINED)
#include <Modloader/app/structs/StringStorage__Fields.h>
#if defined(IL2CPP_STRUCT_StringStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_StringStorage_DEFINED
struct StringStorage__Class;
struct StringStorage {
    struct StringStorage__Class* klass;
    MonitorData* monitor;
    struct StringStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringStorage_FWDDECL)
#define IL2CPP_STRUCT_StringStorage_FWDDECL
#include <Modloader/app/structs/StringStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_StringStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringStorage_DEFINED) && !defined(IL2CPP_STRUCT_StringStorage_FWDDECL)
#include <Modloader/app/structs/StringStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
