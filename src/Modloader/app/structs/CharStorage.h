#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharStorage_DEFINED)
#include <Modloader/app/structs/CharStorage__Fields.h>
#if defined(IL2CPP_STRUCT_CharStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_CharStorage_DEFINED
struct CharStorage__Class;
struct CharStorage {
    struct CharStorage__Class* klass;
    MonitorData* monitor;
    struct CharStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharStorage_FWDDECL)
#define IL2CPP_STRUCT_CharStorage_FWDDECL
#include <Modloader/app/structs/CharStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_CharStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharStorage_DEFINED) && !defined(IL2CPP_STRUCT_CharStorage_FWDDECL)
#include <Modloader/app/structs/CharStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
