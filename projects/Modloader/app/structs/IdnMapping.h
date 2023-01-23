#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdnMapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdnMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdnMapping_DEFINED)
#include <Modloader/app/structs/IdnMapping__Fields.h>
#if defined(IL2CPP_STRUCT_IdnMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_IdnMapping_DEFINED
struct IdnMapping__Class;
struct IdnMapping {
    struct IdnMapping__Class* klass;
    MonitorData* monitor;
    struct IdnMapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IdnMapping_FWDDECL)
#define IL2CPP_STRUCT_IdnMapping_FWDDECL
#include <Modloader/app/structs/IdnMapping__Class.h>
#endif
#undef IL2CPP_STRUCT_IdnMapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdnMapping_DEFINED) && !defined(IL2CPP_STRUCT_IdnMapping_FWDDECL)
#include <Modloader/app/structs/IdnMapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdnMapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
