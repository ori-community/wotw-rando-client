#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSessionCache__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSessionCache__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionCache__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ClientSessionCache__StaticFields_DEFINED
struct Hashtable;
struct Object;
struct ClientSessionCache__StaticFields {
    struct Hashtable* cache;
    struct Object* locker;
};
#endif
#if !defined(IL2CPP_STRUCT_ClientSessionCache__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ClientSessionCache__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ClientSessionCache__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionCache__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ClientSessionCache__StaticFields_FWDDECL)
#include <Modloader/app/structs/ClientSessionCache__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSessionCache__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
