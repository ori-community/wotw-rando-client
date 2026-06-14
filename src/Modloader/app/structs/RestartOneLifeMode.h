#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestartOneLifeMode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestartOneLifeMode_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestartOneLifeMode_DEFINED)
#include <Modloader/app/structs/RestartOneLifeMode__Fields.h>
#if defined(IL2CPP_STRUCT_RestartOneLifeMode__Fields_DEFINED)
#define IL2CPP_STRUCT_RestartOneLifeMode_DEFINED
struct RestartOneLifeMode__Class;
struct RestartOneLifeMode {
    struct RestartOneLifeMode__Class* klass;
    MonitorData* monitor;
    struct RestartOneLifeMode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestartOneLifeMode_FWDDECL)
#define IL2CPP_STRUCT_RestartOneLifeMode_FWDDECL
#include <Modloader/app/structs/RestartOneLifeMode__Class.h>
#endif
#undef IL2CPP_STRUCT_RestartOneLifeMode_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestartOneLifeMode_DEFINED) && !defined(IL2CPP_STRUCT_RestartOneLifeMode_FWDDECL)
#include <Modloader/app/structs/RestartOneLifeMode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestartOneLifeMode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
