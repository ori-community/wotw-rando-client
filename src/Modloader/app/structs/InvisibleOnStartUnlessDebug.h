#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_DEFINED)
#include <Modloader/app/structs/InvisibleOnStartUnlessDebug__Fields.h>
#if defined(IL2CPP_STRUCT_InvisibleOnStartUnlessDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_DEFINED
struct InvisibleOnStartUnlessDebug__Class;
struct InvisibleOnStartUnlessDebug {
    struct InvisibleOnStartUnlessDebug__Class* klass;
    MonitorData* monitor;
    struct InvisibleOnStartUnlessDebug__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_FWDDECL)
#define IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_FWDDECL
#include <Modloader/app/structs/InvisibleOnStartUnlessDebug__Class.h>
#endif
#undef IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_DEFINED) && !defined(IL2CPP_STRUCT_InvisibleOnStartUnlessDebug_FWDDECL)
#include <Modloader/app/structs/InvisibleOnStartUnlessDebug.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvisibleOnStartUnlessDebug.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
