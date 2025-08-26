#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include <../../Core/Inc/main.h>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
    HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
    HAL_Delay(80);
}
