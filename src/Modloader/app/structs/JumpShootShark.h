#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpShootShark_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpShootShark_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShootShark_DEFINED)
#include <Modloader/app/structs/JumpShootShark__Fields.h>
#if defined(IL2CPP_STRUCT_JumpShootShark__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpShootShark_DEFINED
struct JumpShootShark__Class;
struct JumpShootShark {
    struct JumpShootShark__Class* klass;
    MonitorData* monitor;
    struct JumpShootShark__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpShootShark_FWDDECL)
#define IL2CPP_STRUCT_JumpShootShark_FWDDECL
#include <Modloader/app/structs/JumpShootShark__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpShootShark_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShootShark_DEFINED) && !defined(IL2CPP_STRUCT_JumpShootShark_FWDDECL)
#include <Modloader/app/structs/JumpShootShark.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpShootShark.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
