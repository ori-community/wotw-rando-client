#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_gameserveritem_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_gameserveritem_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_gameserveritem_t_DEFINED)
#include <Modloader/app/structs/gameserveritem_t__Fields.h>
#if defined(IL2CPP_STRUCT_gameserveritem_t__Fields_DEFINED)
#define IL2CPP_STRUCT_gameserveritem_t_DEFINED
struct gameserveritem_t__Class;
struct gameserveritem_t {
    struct gameserveritem_t__Class* klass;
    MonitorData* monitor;
    struct gameserveritem_t__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_gameserveritem_t_FWDDECL)
#define IL2CPP_STRUCT_gameserveritem_t_FWDDECL
#include <Modloader/app/structs/gameserveritem_t__Class.h>
#endif
#undef IL2CPP_STRUCT_gameserveritem_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_gameserveritem_t_DEFINED) && !defined(IL2CPP_STRUCT_gameserveritem_t_FWDDECL)
#include <Modloader/app/structs/gameserveritem_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/gameserveritem_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
