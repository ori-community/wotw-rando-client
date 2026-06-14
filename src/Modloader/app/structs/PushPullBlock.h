#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushPullBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushPullBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlock_DEFINED)
#include <Modloader/app/structs/PushPullBlock__Fields.h>
#if defined(IL2CPP_STRUCT_PushPullBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_PushPullBlock_DEFINED
struct PushPullBlock__Class;
struct PushPullBlock {
    struct PushPullBlock__Class* klass;
    MonitorData* monitor;
    struct PushPullBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushPullBlock_FWDDECL)
#define IL2CPP_STRUCT_PushPullBlock_FWDDECL
#include <Modloader/app/structs/PushPullBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_PushPullBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlock_DEFINED) && !defined(IL2CPP_STRUCT_PushPullBlock_FWDDECL)
#include <Modloader/app/structs/PushPullBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushPullBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
