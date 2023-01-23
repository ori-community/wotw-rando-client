#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossBaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossBaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour_DEFINED)
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossBaseBehaviour_DEFINED
struct SpiderBossBaseBehaviour__Class;
struct SpiderBossBaseBehaviour {
    struct SpiderBossBaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct SpiderBossBaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossBaseBehaviour_FWDDECL
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossBaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour_FWDDECL)
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
