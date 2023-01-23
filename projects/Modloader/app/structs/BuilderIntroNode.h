#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderIntroNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderIntroNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderIntroNode_DEFINED)
#include <Modloader/app/structs/BuilderIntroNode__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderIntroNode__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderIntroNode_DEFINED
struct BuilderIntroNode__Class;
struct BuilderIntroNode {
    struct BuilderIntroNode__Class* klass;
    MonitorData* monitor;
    struct BuilderIntroNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderIntroNode_FWDDECL)
#define IL2CPP_STRUCT_BuilderIntroNode_FWDDECL
#include <Modloader/app/structs/BuilderIntroNode__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderIntroNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderIntroNode_DEFINED) && !defined(IL2CPP_STRUCT_BuilderIntroNode_FWDDECL)
#include <Modloader/app/structs/BuilderIntroNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderIntroNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
