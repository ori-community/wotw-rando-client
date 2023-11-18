#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityKeyMemberConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityKeyMemberConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKeyMemberConverter_DEFINED)
#define IL2CPP_STRUCT_EntityKeyMemberConverter_DEFINED
struct EntityKeyMemberConverter__Class;
struct EntityKeyMemberConverter {
    struct EntityKeyMemberConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityKeyMemberConverter_FWDDECL)
#define IL2CPP_STRUCT_EntityKeyMemberConverter_FWDDECL
#include <Modloader/app/structs/EntityKeyMemberConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityKeyMemberConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKeyMemberConverter_DEFINED) && !defined(IL2CPP_STRUCT_EntityKeyMemberConverter_FWDDECL)
#include <Modloader/app/structs/EntityKeyMemberConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityKeyMemberConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
