#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLookUp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLookUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLookUp_DEFINED)
#include <Modloader/app/structs/SeinLookUp__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLookUp__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLookUp_DEFINED
struct SeinLookUp__Class;
struct SeinLookUp {
    struct SeinLookUp__Class* klass;
    MonitorData* monitor;
    struct SeinLookUp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLookUp_FWDDECL)
#define IL2CPP_STRUCT_SeinLookUp_FWDDECL
#include <Modloader/app/structs/SeinLookUp__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLookUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLookUp_DEFINED) && !defined(IL2CPP_STRUCT_SeinLookUp_FWDDECL)
#include <Modloader/app/structs/SeinLookUp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLookUp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
