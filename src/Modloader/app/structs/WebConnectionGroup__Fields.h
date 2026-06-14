#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnectionGroup__Fields_DEFINED
struct ServicePoint;
struct String;
struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_;
struct Queue;
struct EventHandler;
struct __declspec(align(8)) WebConnectionGroup__Fields {
    struct ServicePoint* sPoint;
    struct String* name;
    struct LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_* connections;
    struct Queue* queue;
    bool closing;
    struct EventHandler* ConnectionClosed;
};
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionGroup__Fields_FWDDECL
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionGroup__Fields_FWDDECL)
#include <Modloader/app/structs/WebConnectionGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
