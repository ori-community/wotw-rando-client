#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierWrapper_DEFINED)
#include <Modloader/app/structs/ModifierWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_ModifierWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifierWrapper_DEFINED
struct ModifierWrapper__Class;
struct ModifierWrapper {
    struct ModifierWrapper__Class* klass;
    MonitorData* monitor;
    struct ModifierWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifierWrapper_FWDDECL)
#define IL2CPP_STRUCT_ModifierWrapper_FWDDECL
#include <Modloader/app/structs/ModifierWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_ModifierWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierWrapper_DEFINED) && !defined(IL2CPP_STRUCT_ModifierWrapper_FWDDECL)
#include <Modloader/app/structs/ModifierWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
