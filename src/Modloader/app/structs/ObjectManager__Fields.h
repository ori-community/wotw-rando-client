#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectManager__Fields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_ObjectManager__Fields_DEFINED
struct DeserializationEventHandler;
struct SerializationEventHandler;
struct ObjectHolder__Array;
struct Object;
struct ObjectHolderList;
struct ISurrogateSelector;
struct __declspec(align(8)) ObjectManager__Fields {
    struct DeserializationEventHandler* m_onDeserializationHandler;
    struct SerializationEventHandler* m_onDeserializedHandler;
    struct ObjectHolder__Array* m_objects;
    struct Object* m_topObject;
    struct ObjectHolderList* m_specialFixupObjects;
    int64_t m_fixupCount;
    struct ISurrogateSelector* m_selector;
    struct StreamingContext m_context;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectManager__Fields_FWDDECL
#include <Modloader/app/structs/DeserializationEventHandler.h>
#include <Modloader/app/structs/ISurrogateSelector.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectHolderList.h>
#include <Modloader/app/structs/ObjectHolder__Array.h>
#include <Modloader/app/structs/SerializationEventHandler.h>
#endif
#undef IL2CPP_STRUCT_ObjectManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectManager__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
