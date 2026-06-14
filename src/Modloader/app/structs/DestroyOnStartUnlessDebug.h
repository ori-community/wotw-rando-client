#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyOnStartUnlessDebug_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyOnStartUnlessDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnStartUnlessDebug_DEFINED)
#include <Modloader/app/structs/DestroyOnStartUnlessDebug__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyOnStartUnlessDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyOnStartUnlessDebug_DEFINED
struct DestroyOnStartUnlessDebug__Class;
struct DestroyOnStartUnlessDebug {
    struct DestroyOnStartUnlessDebug__Class* klass;
    MonitorData* monitor;
    struct DestroyOnStartUnlessDebug__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyOnStartUnlessDebug_FWDDECL)
#define IL2CPP_STRUCT_DestroyOnStartUnlessDebug_FWDDECL
#include <Modloader/app/structs/DestroyOnStartUnlessDebug__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyOnStartUnlessDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnStartUnlessDebug_DEFINED) && !defined(IL2CPP_STRUCT_DestroyOnStartUnlessDebug_FWDDECL)
#include <Modloader/app/structs/DestroyOnStartUnlessDebug.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyOnStartUnlessDebug.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
